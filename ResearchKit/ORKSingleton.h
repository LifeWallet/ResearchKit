//
//  ORKSingleton.h
//  ResearchKit
//
//  Created by Mike Leveton on 4/4/16.
//  Copyright © 2016 researchkit.org. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ORKSingleton : NSObject
@property (nonatomic, strong) NSString   *currentLanguage; //This is expecting the full word (English, Español. etc...)

+ (ORKSingleton *)sharedSingleton;
@end
