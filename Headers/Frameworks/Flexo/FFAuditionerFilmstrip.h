//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFFilmstrip.h>

__attribute__((visibility("hidden")))
@interface FFAuditionerFilmstrip : FFFilmstrip
{
}

+ (id)filmstripWithSkimmable:(struct NSObject *)arg1 andRange:(CDStruct_e83c9415)arg2 timeRange:(CDStruct_e83c9415)arg3 thumbHeight:(double)arg4 audioHeight:(double)arg5 forEditing:(BOOL)arg6 clippedRange:(CDStruct_e83c9415)arg7 clippedWidth:(double)arg8 thumbCount:(unsigned long long)arg9;
+ (id)filmstripWithSkimmable:(struct NSObject *)arg1 andRange:(CDStruct_e83c9415)arg2 thumbHeight:(double)arg3 audioHeight:(double)arg4 forEditing:(BOOL)arg5 clippedRange:(CDStruct_e83c9415)arg6 clippedWidth:(double)arg7 thumbCount:(unsigned long long)arg8;
- (long long)effectCount;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;

@end

