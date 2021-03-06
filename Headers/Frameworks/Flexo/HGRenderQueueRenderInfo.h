//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFImageRepBindingInfo;

__attribute__((visibility("hidden")))
@interface HGRenderQueueRenderInfo : NSObject
{
    struct HGRenderer *_renderer;
    FFImageRepBindingInfo *_bindingInfo;
    _Bool _usedRenderer;
}

@property(readonly) FFImageRepBindingInfo *bindingInfo; // @synthesize bindingInfo=_bindingInfo;
@property(readonly) struct HGRenderer *renderer; // @synthesize renderer=_renderer;
@property _Bool usedRenderer; // @synthesize usedRenderer=_usedRenderer;
- (void)dealloc;
- (id)initWithRenderer:(struct HGRenderer *)arg1 bindingInfo:(id)arg2;

@end

