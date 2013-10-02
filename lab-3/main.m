#import<Foundation/Foundation.h>
#import "Employee.h"
int main(int argc, char* argv[])
{
	Employee *emp=[[Employee alloc]init];
	[emp setName:@"Pratyush"];
	[emp setDept:@"ISE"];
	[emp setEid:129];
	NSLog(@"Name is %@",[emp getName]);
	NSLog(@"Dept is %@",[emp getDept]);
	NSLog(@"EID: %d",[emp getEid]);
	[emp release];
	return 0;
} 
