//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFViaRQStatusCB-Protocol.h>
#import <Flexo/HGRQCustomJobProtocol-Protocol.h>

@class FFHGAsyncFanoutJob, NSConditionLock;

__attribute__((visibility("hidden")))
@interface FFFlattenViaRQCustomJobObj : NSObject <HGRQCustomJobProtocol, FFViaRQStatusCB>
{
    NSConditionLock *_cond;
    CDUnknownBlockType _jobBlock;
    FFHGAsyncFanoutJob *_flattenJob;
}

- (_Bool)waitForSuccessOrTimeout:(id)arg1;
- (_Bool)finished;
- (void)customHGRenderQueueJobCallback:(struct HGRenderer *)arg1 theJob:(id)arg2;
- (void)dealloc;
- (id)initWithJobBlock:(CDUnknownBlockType)arg1;

@end

