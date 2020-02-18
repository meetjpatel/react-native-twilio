//
//  RCTTwilio.h
//  RCTTwilio
//
//  Created by Roger Chapman on 11/11/2015.
//  Copyright © 2015 Rogchap Software. All rights reserved.
//

#if __has_include(<React/RCTBridgeModule.h>)
  #import <React/RCTBridgeModule.h>
#else
  #import "RCTBridgeModule.h"
#endif
#import "TwilioClient.h"
#import "RCTEventEmitter.h"

@interface RCTTwilio : RCTEventEmitter <RCTBridgeModule, TCDeviceDelegate, TCConnectionDelegate>
@end
