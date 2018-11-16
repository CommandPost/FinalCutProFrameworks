//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHGAsyncFanoutResult.h>

@class FFImage, FFImageAbsoluteOutputFormat;

__attribute__((visibility("hidden")))
@interface FFHGFanoutResultBypass : FFHGAsyncFanoutResult
{
    FFImage *_image;
    FFImageAbsoluteOutputFormat *_outFmt;
    int _location;
    int _workingSpace;
    _Bool _cancelled;
}

@property _Bool cancelled; // @synthesize cancelled=_cancelled;
- (id)description;
- (id)newImage;
- (void)ensureFlattened:(_Bool)arg1;
- (struct CGColorSpace *)colorSpace;
- (int)location;
- (void)dealloc;
- (id)initWithImage:(id)arg1 pixelFormat:(id)arg2 location:(int)arg3 workingSpace:(int)arg4;

@end

