a.exe:queue_app.o queue_imp.o
	c++ queue_app.o queue_imp.o -o a.exe
queue_app.o:queue_app.cpp
	c++ -c queue_app.cpp
queue_imp.o:queue_imp.cpp
	c++ -c queue_imp.cpp