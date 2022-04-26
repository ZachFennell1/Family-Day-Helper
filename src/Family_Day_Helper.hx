import h2d.filter.Glow;
import h2d.Interactive;
import h2d.TileGroup;
import h2d.Tile;
import hxd.Window;
import Random;
import h2d.SpriteBatch;
import hxd.Key;
import Date;

class Family_Day_Helper extends hxd.App {
	var stage:Window;
	var w:Int;
	var h:Int;
	var time_Display:h2d.Text;
	var family_Warn:h2d.Text;
	var date_Display:h2d.Text;
	var time:String;
	var day:String;
	var month:String;
	var year:String;

	override function init() {
		super.init();

		stage = Window.getInstance();
        stage.title = "Family Time Countdown";
		w = stage.width;
		h = stage.height;
		var font = hxd.res.DefaultFont.get();

		time_Display = new h2d.Text(font, s2d);
		time_Display.setScale(5);
		time_Display.setPosition(w / 2, h / 1.5);
		time_Display.textAlign = Center;

		family_Warn = new h2d.Text(font, s2d);
		family_Warn.setScale(5);
		family_Warn.setPosition(w / 2, h / 3);
		family_Warn.textAlign = Center;

		date_Display = new h2d.Text(font, s2d);
		date_Display.setScale(5);
		date_Display.setPosition(w / 2, h / 5.8);
		date_Display.textAlign = Center;

		make_clock();
	}

	function make_clock() {
		var wholeDate = Date.now().toString().split(" ");

		var calDate = wholeDate[0].split("-");
		year = calDate[0];
		month = calDate[1];
		day = calDate[2];

		time = wholeDate[1];

		time_Display.text = time;

        date_Display.text = (month + "/" + day + "/" + year);

		get_family_warn();
	}

	function get_family_warn() {
		var dayOfWeek = Date.now().getDay();
		var timeNow = (dayOfWeek * 24) * 60; 

		var timesplit = time.split(":");
		var hour = timesplit[0];
		var min = timesplit[1];

		var targetTime =  (5 * 24) *60;
		
		targetTime += 15 * 60;

		var remaning_mins;

		if(dayOfWeek == 6 || dayOfWeek ==5 && Std.parseInt(hour)>=15)
		{
			timeNow += (Std.parseInt(hour) -1) * 60;

			timeNow += Std.parseInt(min);

			var EOW = (7 * 24 * 60);

			remaning_mins = targetTime + (EOW - timeNow);
		}
		else
		{
			timeNow += (Std.parseInt(hour) -1) * 60;

			timeNow += Std.parseInt(min);

			remaning_mins = targetTime - timeNow;
		}

		family_Warn.text = "MINUTES REMAINING\n" + Std.string(remaning_mins);
        return;
	}

	override function onResize() {
		stage = Window.getInstance();
		w = stage.width;
		h = stage.height;
		time_Display.setPosition(w / 2, h / 1.5);
		family_Warn.setPosition(w / 2, h / 3);
		date_Display.setPosition(w / 2, h / 6);
	}

	override function update(dt:Float) {
		super.update(dt);
		make_clock();
	}

	static function main() {
		new Family_Day_Helper();
	}
}
