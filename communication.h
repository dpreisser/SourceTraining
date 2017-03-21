#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include "stdio.h"

enum Message { Change_Altitude, Change_Course, Text_Message, Invalid };
typedef enum Message MessageT;

enum Boolean { False, True };

struct AltCmd {
   unsigned newAltitude;
   int crc;
   };
typedef struct AltCmd AltCmdT;

struct CourseCmd {
   float newCourse;
   int crc;
   };
typedef struct CourseCmd CourseCmdT;


enum Boolean ProcessMessage ( MessageT messageCategory,
                      void *message );

void ChangeAltitude ( unsigned altitude );
void ChangeCourse ( float course );
void InvalidCommand ( MessageT messageCategory );

#endif
