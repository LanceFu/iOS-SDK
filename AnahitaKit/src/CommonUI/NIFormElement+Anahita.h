//
//  NIFormElement+Anahita.h
//  Pods
//
//  Created by Arash  Sanieyan on 2013-01-21.
//
//

#import "AKCommonUI.h"

@interface NITableViewModel(ExtraMethods)

- (NSIndexPath*)indexPathOfObject:(id)object;

@end

@interface NIMutableTableViewModel(ExtraMethods)

- (NSArray*)replaceObjectAtIndexPath:(NSIndexPath*)indexPath withObject:(id)object;

@end

/**
 @class NICellObject
 
 @abstract
 
*/
@interface NICellObject()

/** @abstract */
@property (nonatomic, assign) Class cellClass;

/** @abstract */
@property (nonatomic, NI_STRONG) id userInfo;

@end

#pragma mark - 

/**
 @category StylerTag
 @class NICellObject
 
 @abstract
 
*/
@interface NICellObject(StylerTag)

/** @abstract */
@property (nonatomic, readonly) NSArray *styleTags;

/** 
  @method

  @abstract
*/
- (void)addStyleTags:(NSString*)tag1,...;

/** 
  @method

  @abstract
*/
- (void)addStyleTag:(NSString*)tag;

@end

/**
 @category AKFormElement
 @class NISwitchFormElement
 
 @abstract
 
*/
@interface NISwitchFormElement(Anahita) <AKFormElement>
@end

/**
 @category AKFormElement
 @class NITextInputFormElement
 
 @abstract
 
*/
@interface NITextInputFormElement(Anahita) <AKFormElement>
@end

/**
 @category AKFormElement
 @class NISliderFormElement
 
 @abstract
 
*/
@interface NISliderFormElement(Anahita) <AKFormElement>
@end

/**
 @category AKFormElement
 @class NISegmentedControlFormElement
 
 @abstract
 
*/
@interface NISegmentedControlFormElement(Anahita) <AKFormElement>
@end

/**
 @category AKFormElement
 @class NIDatePickerFormElement
 
 @abstract
 
*/
@interface NIDatePickerFormElement(Anahita) <AKFormElement>
@end
