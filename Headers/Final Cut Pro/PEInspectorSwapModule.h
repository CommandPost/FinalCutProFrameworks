//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKSwapModule.h"

@interface PEInspectorSwapModule : LKSwapModule
{
    struct CGSize _viewMinSize;
    struct CGSize _viewMaxSize;
}

@property(nonatomic) struct CGSize viewMaxSize; // @synthesize viewMaxSize=_viewMaxSize;
@property(nonatomic) struct CGSize viewMinSize; // @synthesize viewMinSize=_viewMinSize;
- (void)postLayout:(id)arg1;
- (void)_swapToModule:(id)arg1 animate:(BOOL)arg2;
- (BOOL)wantsFocusIndicator;
- (id)init;

@end

