//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/AutoEncodeDecodeObject.h>

@class NSString;

@interface RCSport : AutoEncodeDecodeObject
{
    NSString *m_name;
    NSString *m_statistic1Label;
    NSString *m_statistic2Label;
    NSString *m_statistic3Label;
    NSString *m_statistic4Label;
}

@property(retain, nonatomic) NSString *statistic4Label; // @synthesize statistic4Label=m_statistic4Label;
@property(retain, nonatomic) NSString *statistic3Label; // @synthesize statistic3Label=m_statistic3Label;
@property(retain, nonatomic) NSString *statistic2Label; // @synthesize statistic2Label=m_statistic2Label;
@property(retain, nonatomic) NSString *statistic1Label; // @synthesize statistic1Label=m_statistic1Label;
@property(retain, nonatomic) NSString *name; // @synthesize name=m_name;
- (id)initWithLocalizedName:(id)arg1 statistic1:(id)arg2 statistic2:(id)arg3 statistic3:(id)arg4 statistic4:(id)arg5;
- (id)init;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (id)keysToEncode;
- (id)keysToSetToNil;
- (void)dealloc;

@end

