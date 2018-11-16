//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFShareExportPanelsHelper.h>

#import "NSOpenSavePanelDelegate.h"

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface FFShareExportPanelsHelperSingleItem : FFShareExportPanelsHelper <NSOpenSavePanelDelegate>
{
    NSMutableSet *_validFileNames;
}

@property(retain, nonatomic) NSMutableSet *validFileNames; // @synthesize validFileNames=_validFileNames;
- (id)invalidDestinationErrorWithFileName:(id)arg1;
- (id)fileExistsErrorWithFileName:(id)arg1;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (id)panel:(id)arg1 userEnteredFilename:(id)arg2 confirmed:(BOOL)arg3;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (id)filterStringRemovingUnsafeCharacters:(id)arg1;
- (void)doSavePanelForDestinations:(id)arg1 promise:(id)arg2;
- (void)setURL:(id)arg1 forDestination:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
