//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OZViewController;

@interface DependencyEntry : NSObject
{
    OZViewController *_pController;
    int _type;
}

@property int type; // @synthesize type=_type;
@property(retain) OZViewController *controller; // @synthesize controller=_pController;
- (void)dealloc;

@end

