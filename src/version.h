#ifndef VERSION_H
#define VERSION_H

#define MAJOR_VERSION 1
#define MINOR_VERSION 7
#define PATCH_VERSION 1
#define BUILD_VERSION 4

#ifdef INNO_SETUP
	#define APP_VERSION Str(MAJOR_VERSION) + "." + Str(MINOR_VERSION) + "." + Str(PATCH_VERSION) + "." + "b" + Str(BUILD_VERSION)
#else
	#define str(s) #s
	#define xstr(s) str(s)
	#define APP_VERSION xstr(MAJOR_VERSION) "." xstr(MINOR_VERSION) "." xstr(PATCH_VERSION) "b" xstr(BUILD_VERSION)

	// If it is defined by the compiler, then it is a nightly build, and in the YYYYMMDD format.
	#ifndef BUILD_VERSION
		#define BUILD_VERSION 0
	#endif
#endif

#endif // VERSION_H
