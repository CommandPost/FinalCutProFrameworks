//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

@class FFContext, FFProvider;

__attribute__((visibility("hidden")))
@interface FFSettingsModule : LKViewModule
{
    FFProvider *_provider;
    FFContext *_context;
}

- (id)initWithProvider:(id)arg1;
- (void)dealloc;
- (void)closingWithCode:(int)arg1;
- (BOOL)validate:(id *)arg1;
@property(retain, nonatomic) FFContext *context; // @synthesize context=_context;
@property(retain, nonatomic) FFProvider *provider; // @synthesize provider=_provider;

@end

