//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorFolderHeadingController.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorBrickFolderHeadingController : FFInspectorFolderHeadingController
{
    NSView *_brickHeaderBarView;
    BOOL _hideBrickHeaderBar;
}

@property(nonatomic) BOOL hideBrickHeaderBar; // @synthesize hideBrickHeaderBar=_hideBrickHeaderBar;
- (void)loadView;
- (double)centerYOffset;
- (double)viewHeight;
- (void)dealloc;

@end
