//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProvider.h>

__attribute__((visibility("hidden")))
@interface FFProviderStreamSharer : FFProvider
{
    FFProvider *_underlyingProvider;
    int _numSharing;
}

- (void)_setupSources;
- (void)dealloc;
- (id)initWithProvider:(id)arg1 numSharing:(int)arg2;

@end

