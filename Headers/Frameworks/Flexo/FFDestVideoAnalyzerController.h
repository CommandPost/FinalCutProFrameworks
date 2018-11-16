//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDestAnalyzerController.h>

#import "FFDestVideoAnalyzerProtocol.h"

__attribute__((visibility("hidden")))
@interface FFDestVideoAnalyzerController : FFDestAnalyzerController <FFDestVideoAnalyzerProtocol>
{
}

- (id)anchoredVideoMediaComponent;
- (void)start;
- (CDUnknownBlockType)analyzeImage;
- (void)finish;
- (void)cancel;
- (void)pause;
- (void)resume;
- (BOOL)reuseDataForAnalyzing;

@end
