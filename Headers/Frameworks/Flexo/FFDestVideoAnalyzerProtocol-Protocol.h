//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FFDestVideoAnalyzerProtocol
- (void)start;
- (CDUnknownBlockType)analyzeImage;
- (void)finish;
- (void)cancel;
- (void)pause;
- (void)resume;
- (BOOL)reuseDataForAnalyzing;
@end

