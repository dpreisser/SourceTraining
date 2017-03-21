int MCDC_Example (int a, int b, int c) {

   if (a && (b || c))
      return 1;
   else
      return 0;

}

int LogicalinAssigment_Example (int a, int b, int c) {

   int local;
   local = (a && b && c);
   return (local && a);
   
   }

extern int foo(int x);
   
int LogicalinFunctionCall_Example (int a, int b, int c) {

   int local;
   local = foo (a && b && c);
   
   return local;
   
}
    
	
int LargeConditional1 (
   int a, int b, int c, int d, 
   int e, int f, int g, int h, int i) {

   int local;

   local = (a && b && c && d && e && f && g && h && i);
   
   return local;
   
}
	
int LargeConditional2 (
   int a, int b, int c, int d, 
   int e, int f, int g, int h, int i) {

   int local;

   local = (((a || b) && !c) && (d || e) && (f != g) && h && i);
   
   return local;
   
}