//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QTMovieLayer;

@interface OZQTMovieLayer : NSObject
{
    QTMovieLayer *_layer;
    BOOL _isPlaceholderMovie;
    id _placeholderDelegate;
}

- (id)layer;
- (void)dealloc;
- (void)play;
- (BOOL)isPlaceholderMovie;
- (void)setIsPlaceholderMovie:(BOOL)arg1;
- (void)setPlaceholderDelegate:(id)arg1;
- (id)placeholderDelegate;

@end

