// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/MainLoop.h>
extern haxe__$MainLoop g$_haxe_MainLoop;
extern String s$Event_function_is_null;
vdynamic* haxe_Exception_thrown(vdynamic*);
extern hl_type t$haxe_MainEvent;
void haxe_MainEvent_new(haxe__MainEvent,vclosure*,int);
void haxe_MainLoop_injectIntoEventLoop(int);
#include <sys/thread/EventLoop.h>
sys__thread__EventLoop sys_thread__Thread_Thread_Impl__get_events(sys__thread___Thread__HaxeThread);
void sys_thread_EventLoop_cancel(sys__thread__EventLoop,sys__thread___EventLoop__RegularEvent);
double haxe_MainLoop_tick(void);
#include <hl/natives.h>
extern hl_type t$fun_7b48b4f;
sys__thread___EventLoop__RegularEvent sys_thread_EventLoop_repeat(sys__thread__EventLoop,vclosure*,int);

bool haxe_MainLoop_hasEvents() {
	bool r3;
	haxe__MainEvent r0, r2;
	haxe__$MainLoop r1;
	r1 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r0 = r1->pending;
	label$1c38f5c_1_2:
	if( !r0 ) goto label$1c38f5c_1_12;
	if( r0 == NULL ) hl_null_access();
	r3 = r0->isBlocking;
	if( !r3 ) goto label$1c38f5c_1_9;
	r3 = true;
	return r3;
	label$1c38f5c_1_9:
	r2 = r0->next;
	r0 = r2;
	goto label$1c38f5c_1_2;
	label$1c38f5c_1_12:
	r3 = false;
	return r3;
}

haxe__MainEvent haxe_MainLoop_add(vclosure* r0,int* r1) {
	String r5;
	haxe__MainEvent r6, r8;
	haxe__$MainLoop r9;
	vdynamic *r4;
	int r2, r7;
	if( r1 ) goto label$1c38f5c_2_3;
	r2 = 0;
	goto label$1c38f5c_2_4;
	label$1c38f5c_2_3:
	r2 = *r1;
	label$1c38f5c_2_4:
	if( r0 ) goto label$1c38f5c_2_8;
	r5 = (String)s$Event_function_is_null;
	r4 = haxe_Exception_thrown(((vdynamic*)r5));
	hl_throw((vdynamic*)r4);
	label$1c38f5c_2_8:
	r6 = (haxe__MainEvent)hl_alloc_obj(&t$haxe_MainEvent);
	haxe_MainEvent_new(r6,r0,r2);
	r9 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r8 = r9->pending;
	if( !r8 ) goto label$1c38f5c_2_15;
	if( r8 == NULL ) hl_null_access();
	r8->prev = r6;
	label$1c38f5c_2_15:
	r6->next = r8;
	r9 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r9->pending = r6;
	r7 = 0;
	haxe_MainLoop_injectIntoEventLoop(r7);
	return r6;
}

void haxe_MainLoop_injectIntoEventLoop__$1() {
	sys__thread___Thread__HaxeThread r2;
	bool r6;
	sys__thread___EventLoop__RegularEvent r4;
	sys__thread__EventLoop r1;
	double r5, r8, r9;
	haxe__$MainLoop r3;
	int r7;
	r3 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r2 = r3->mainThread;
	r1 = sys_thread__Thread_Thread_Impl__get_events(r2);
	if( r1 == NULL ) hl_null_access();
	r3 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r4 = r3->eventLoopHandler;
	sys_thread_EventLoop_cancel(r1,r4);
	r5 = haxe_MainLoop_tick();
	r6 = haxe_MainLoop_hasEvents();
	if( !r6 ) goto label$1c38f5c_3_14;
	r9 = 1000.;
	r8 = r5 * r9;
	r7 = (int)r8;
	haxe_MainLoop_injectIntoEventLoop(r7);
	label$1c38f5c_3_14:
	return;
}

void haxe_MainLoop_injectIntoEventLoop(int r0) {
	sys__thread___Thread__HaxeThread r6;
	sys__thread__EventLoop r5;
	sys__thread___EventLoop__RegularEvent r4;
	hl_mutex *r2;
	vclosure *r7;
	haxe__$MainLoop r3;
	static vclosure cl$0 = { &t$fun_7b48b4f, haxe_MainLoop_injectIntoEventLoop__$1, 0 };
	r3 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r2 = r3->mutex;
	hl_mutex_acquire(r2);
	r3 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r4 = r3->eventLoopHandler;
	if( !r4 ) goto label$1c38f5c_4_13;
	r3 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r6 = r3->mainThread;
	r5 = sys_thread__Thread_Thread_Impl__get_events(r6);
	if( r5 == NULL ) hl_null_access();
	r3 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r4 = r3->eventLoopHandler;
	sys_thread_EventLoop_cancel(r5,r4);
	label$1c38f5c_4_13:
	r3 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r6 = r3->mainThread;
	r5 = sys_thread__Thread_Thread_Impl__get_events(r6);
	if( r5 == NULL ) hl_null_access();
	r7 = &cl$0;
	r4 = sys_thread_EventLoop_repeat(r5,r7,r0);
	r3 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r3->eventLoopHandler = r4;
	r3 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r2 = r3->mutex;
	hl_mutex_release(r2);
	return;
}

void haxe_MainLoop_sortEvents() {
	bool r7;
	haxe__MainEvent r0, r3, r8, r9, r12, r14, r17;
	double r15, r16;
	haxe__$MainLoop r1;
	int r4, r5, r6, r10, r11, r13;
	r1 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r0 = r1->pending;
	if( r0 ) goto label$1c38f5c_5_4;
	return;
	label$1c38f5c_5_4:
	r4 = 1;
	r5 = 0;
	r6 = 0;
	label$1c38f5c_5_7:
	r7 = true;
	if( !r7 ) goto label$1c38f5c_5_95;
	r3 = r0;
	r8 = NULL;
	r0 = r8;
	r9 = NULL;
	r8 = r9;
	r11 = 0;
	r10 = r11;
	label$1c38f5c_5_17:
	if( !r3 ) goto label$1c38f5c_5_85;
	++r10;
	r9 = r3;
	r11 = 0;
	r5 = r11;
	r11 = 0;
	r13 = r4;
	label$1c38f5c_5_25:
	if( r11 >= r13 ) goto label$1c38f5c_5_35;
	++r11;
	++r5;
	if( r9 == NULL ) hl_null_access();
	r12 = r9->next;
	r9 = r12;
	if( r12 ) goto label$1c38f5c_5_34;
	goto label$1c38f5c_5_35;
	label$1c38f5c_5_34:
	goto label$1c38f5c_5_25;
	label$1c38f5c_5_35:
	r6 = r4;
	label$1c38f5c_5_36:
	r13 = 0;
	if( r13 < r5 ) goto label$1c38f5c_5_42;
	r13 = 0;
	if( r13 >= r6 ) goto label$1c38f5c_5_83;
	if( !r9 ) goto label$1c38f5c_5_83;
	label$1c38f5c_5_42:
	r13 = 0;
	if( r5 != r13 ) goto label$1c38f5c_5_50;
	r12 = r9;
	if( r9 == NULL ) hl_null_access();
	r14 = r9->next;
	r9 = r14;
	--r6;
	goto label$1c38f5c_5_74;
	label$1c38f5c_5_50:
	r13 = 0;
	if( r6 == r13 ) goto label$1c38f5c_5_64;
	if( !r9 ) goto label$1c38f5c_5_64;
	if( r3 == NULL ) hl_null_access();
	r11 = r3->priority;
	if( r9 == NULL ) hl_null_access();
	r13 = r9->priority;
	if( r13 < r11 ) goto label$1c38f5c_5_64;
	r11 = r3->priority;
	r13 = r9->priority;
	if( r11 != r13 ) goto label$1c38f5c_5_70;
	r15 = r3->nextRun;
	r16 = r9->nextRun;
	if( !(r16 >= r15) ) goto label$1c38f5c_5_70;
	label$1c38f5c_5_64:
	r12 = r3;
	if( r3 == NULL ) hl_null_access();
	r14 = r3->next;
	r3 = r14;
	--r5;
	goto label$1c38f5c_5_74;
	label$1c38f5c_5_70:
	r12 = r9;
	r14 = r9->next;
	r9 = r14;
	--r6;
	label$1c38f5c_5_74:
	if( !r8 ) goto label$1c38f5c_5_78;
	if( r8 == NULL ) hl_null_access();
	r8->next = r12;
	goto label$1c38f5c_5_79;
	label$1c38f5c_5_78:
	r0 = r12;
	label$1c38f5c_5_79:
	if( r12 == NULL ) hl_null_access();
	r12->prev = r8;
	r8 = r12;
	goto label$1c38f5c_5_36;
	label$1c38f5c_5_83:
	r3 = r9;
	goto label$1c38f5c_5_17;
	label$1c38f5c_5_85:
	if( r8 == NULL ) hl_null_access();
	r17 = NULL;
	r8->next = r17;
	r13 = 1;
	if( r13 < r10 ) goto label$1c38f5c_5_91;
	goto label$1c38f5c_5_95;
	label$1c38f5c_5_91:
	r13 = 2;
	r11 = r4 * r13;
	r4 = r11;
	goto label$1c38f5c_5_7;
	label$1c38f5c_5_95:
	if( r0 == NULL ) hl_null_access();
	r17 = NULL;
	r0->prev = r17;
	r1 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r1->pending = r0;
	return;
}

double haxe_MainLoop_tick() {
	haxe__MainEvent r1, r5;
	vclosure *r9;
	double r3, r4, r6, r7, r8;
	haxe__$MainLoop r2;
	haxe_MainLoop_sortEvents();
	r2 = (haxe__$MainLoop)g$_haxe_MainLoop;
	r1 = r2->pending;
	r3 = hl_sys_time();
	r4 = 1000000000.;
	label$1c38f5c_6_5:
	if( !r1 ) goto label$1c38f5c_6_25;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->next;
	r6 = r1->nextRun;
	r6 = r6 - r3;
	r8 = 0.;
	if( !(r8 >= r6) ) goto label$1c38f5c_6_21;
	r7 = 0.;
	r4 = r7;
	r9 = r1->f;
	if( !r9 ) goto label$1c38f5c_6_20;
	r9 = r1->f;
	if( r9 == NULL ) hl_null_access();
	r9->hasValue ? ((void (*)(vdynamic*))r9->fun)((vdynamic*)r9->value) : ((void (*)(void))r9->fun)();
	label$1c38f5c_6_20:
	goto label$1c38f5c_6_23;
	label$1c38f5c_6_21:
	if( !(r6 < r4) ) goto label$1c38f5c_6_23;
	r4 = r6;
	label$1c38f5c_6_23:
	r1 = r5;
	goto label$1c38f5c_6_5;
	label$1c38f5c_6_25:
	return r4;
}

