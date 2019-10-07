//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFHitTestContextObject : NSObject
{
    struct _CGLContextObject *_hitTestContext;
    unsigned int _hitTestFBO;
    unsigned int _hitTestTexture;
    int _currentVirtualScreenForHitTest;
    struct CGSize _currentSizeForHitTest;
}

- (struct _CGLContextObject *)hitTestContext:(struct CGSize)arg1 virtualScreen:(int)arg2;
- (void)updateInternalHitTestContext:(struct CGSize)arg1 virtualScreen:(int)arg2;
- (void)setUpContextWithSize:(struct _CGLContextObject *)arg1 viewSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)init;

@end

