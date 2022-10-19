#ifdef RCT_NEW_ARCH_ENABLED
#import "RNMyPersonal0librarySpec.h"

@interface MyPersonal0library : NSObject <NativeMyPersonal0librarySpec>
#else
#import <React/RCTBridgeModule.h>

@interface MyPersonal0library : NSObject <RCTBridgeModule>
#endif

@end
