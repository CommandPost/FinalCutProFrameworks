//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QTMovieView.h"

@interface OZMovieView : QTMovieView
{
    BOOL _PARCorrect;
    BOOL _isPlaceholderMovie;
    id _placeholderDelegate;
}

+ (id)defaultMenu;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)movieBounds;
- (BOOL)correctForPixelAspect;
- (void)setCorrectForPixelAspect:(BOOL)arg1;
- (double)getPixelAspectRatio;
- (BOOL)isOpaque;
- (BOOL)isPlaceholderMovie;
- (void)setIsPlaceholderMovie:(BOOL)arg1;
- (void)setPlaceholderDelegate:(id)arg1;
- (id)placeholderDelegate;
- (void)play:(id)arg1;
- (void)setMovie:(id)arg1;

@end

