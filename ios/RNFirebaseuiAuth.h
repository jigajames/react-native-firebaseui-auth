
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

#import <FirebaseUI/FirebaseUI.h>
#import <FirebaseAuthUI/FirebaseAuthUI.h>
#import <FirebaseGoogleAuthUI/FirebaseGoogleAuthUI.h>
#import <FirebaseFacebookAuthUI/FirebaseFacebookAuthUI.h>
#import <FirebaseEmailAuthUI/FirebaseEmailAuthUI.h>
#import <FirebaseOAuthUI/FirebaseOAuthUI.h>
#import <FirebasePhoneAuthUI/FirebasePhoneAuthUI.h>
#import <FirebaseAnonymousAuthUI/FirebaseAnonymousAuthUI.h>

@interface RNFirebaseuiAuth : NSObject <RCTBridgeModule, FUIAuthDelegate>

@end
  
