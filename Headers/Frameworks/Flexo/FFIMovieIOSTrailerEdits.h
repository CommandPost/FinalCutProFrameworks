//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFIMovieIOSEdits.h>

@class FFTrailerController;

__attribute__((visibility("hidden")))
@interface FFIMovieIOSTrailerEdits : FFIMovieIOSEdits
{
    FFTrailerController *_trailerController;
}

@property(retain, nonatomic) FFTrailerController *trailerController; // @synthesize trailerController=_trailerController;
- (BOOL)applyTrailerClips:(id *)arg1 progress:(CDUnknownBlockType)arg2;
- (BOOL)createTrailer:(id *)arg1;
- (void)dealloc;

@end

