//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProPreferences.h"

@interface LKPreferences : NSProPreferences
{
    BOOL _isOpen;
}

+ (Class)defaultPreferencesClass;
- (BOOL)preferencesOpen;
- (BOOL)windowShouldClose:(id)arg1;
- (void)cancel:(id)arg1;
- (void)showPreferencesPanelForOwner:(id)arg1;
- (void)addPreferenceNamed:(id)arg1 owner:(id)arg2;
- (Class)_proToolbarClass;

@end

