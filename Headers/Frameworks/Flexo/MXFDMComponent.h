//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/HPMDMComponentProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MXFDMComponent : NSObject <HPMDMComponentProtocol>
{
    long long frameCount;
    NSString *name;
}

@property(retain) NSString *name; // @synthesize name;
@property long long frameCount; // @synthesize frameCount;
- (void)dealloc;
- (id)initWithDuration:(long long)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

