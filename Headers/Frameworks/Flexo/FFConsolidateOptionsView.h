//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton;

__attribute__((visibility("hidden")))
@interface FFConsolidateOptionsView : NSView
{
    NSButton *_optimizedMediaCheckbox;
    NSButton *_proxyMediaCheckbox;
}

+ (BOOL)runConsolidateDialogWithTitle:(id)arg1 description:(id)arg2 library:(id)arg3 options:(int *)arg4;
- (int)consolidateOptions;
- (id)options;
- (void)setOptions:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)runConsolidateDialogWithTitle:(id)arg1 description:(id)arg2 library:(id)arg3;

@end

