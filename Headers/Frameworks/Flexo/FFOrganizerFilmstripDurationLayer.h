//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmstripDurationLayer : CALayer
{
    NSString *_durationString;
    NSDictionary *_durationStringAttributes;
}

- (id)init;
- (void)dealloc;
- (void)setDurationString:(id)arg1 withStringAttributes:(id)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;

@end

