//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSProgressIndicator;

__attribute__((visibility("hidden")))
@interface FFFileImportProcessingFilesDialogController : NSWindowController
{
    NSProgressIndicator *mProcessingProgressIndicator;
}

- (id)init;
- (void)dealloc;
- (void)startAnimation;
- (void)stopAnimation;
- (void)setUsesThreadedAnimation:(BOOL)arg1;

@end
