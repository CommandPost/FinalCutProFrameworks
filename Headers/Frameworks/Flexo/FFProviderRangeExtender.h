//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProvider.h>

@class FFSource, NSString;

__attribute__((visibility("hidden")))
@interface FFProviderRangeExtender : FFProvider
{
    CDStruct_e83c9415 _range;
    FFSource *_inputSource;
    NSString *_inputIdentifier;
    CDStruct_e83c9415 _definedRangeToUseFromInput;
}

- (void)_setupSources;
- (CDStruct_e83c9415)range;
- (void)dealloc;
- (id)initWithRange:(CDStruct_e83c9415)arg1 definedRangeToUseFromInput:(CDStruct_e83c9415)arg2 input:(id)arg3 identifier:(id)arg4;
- (_Bool)infiniteSource;

@end

