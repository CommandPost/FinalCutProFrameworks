//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

@class FFProvider;

__attribute__((visibility("hidden")))
@interface FFSettingsModule : LKViewModule
{
    FFProvider *_provider;
    BOOL _enableAutomaticCustomSettingsButton;
}

@property(nonatomic) BOOL enableAutomaticCustomSettingsButton; // @synthesize enableAutomaticCustomSettingsButton=_enableAutomaticCustomSettingsButton;
@property(retain, nonatomic) FFProvider *provider; // @synthesize provider=_provider;
- (BOOL)createAutomatically;
- (void)toggleCreationSettings;
- (BOOL)disableCustomSettingsButton;
- (BOOL)showCustomSettingsButton;
- (BOOL)validate:(id *)arg1;
- (void)closingWithCode:(int)arg1;
- (void)dealloc;
- (id)initWithProvider:(id)arg1;

@end

