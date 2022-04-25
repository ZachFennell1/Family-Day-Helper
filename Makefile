run:
	gcc -o Family_Day_Helper out/main.c -Iout /usr/local/lib/*.hdll -lhl -lSDL2 -lm -lopenal -lGL
	./Family_Day_Helper

clean:
	rm out/ -r