main:
	mkdir -p build
	mkdir -p bin
	g++ thing.cpp -c -o build/thing.o
	g++ world.cpp -c -o build/world.o
	g++ utils/matrix3.cpp -c -o build/matrix3.o
	g++ utils/opengl.cpp -c -o build/opengl.o
	g++ utils/transform2.cpp -c -o build/transform2.o
	g++ utils/trig.cpp -c -o build/trig.o
	g++ things/line.cpp -c -o build/line.o
	g++ things/circle.cpp -c -o build/circle.o
	g++ main.cpp build/*.o -o bin/main -lGL -lGLU -lglut
