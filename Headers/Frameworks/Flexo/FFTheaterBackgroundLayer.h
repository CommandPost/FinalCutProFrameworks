//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class FFTheaterLoginButtonLayer;

__attribute__((visibility("hidden")))
@interface FFTheaterBackgroundLayer : CALayer
{
    FFTheaterLoginButtonLayer *_loginToICloudButtonLayer;
}

@property(retain, nonatomic) FFTheaterLoginButtonLayer *loginToICloudButtonLayer; // @synthesize loginToICloudButtonLayer=_loginToICloudButtonLayer;
- (void)dealloc;
@property(nonatomic) int iCloudLoginState;
- (id)init;

@end
