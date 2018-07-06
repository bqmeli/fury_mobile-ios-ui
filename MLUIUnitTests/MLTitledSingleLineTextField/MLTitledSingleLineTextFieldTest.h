//
// MLTitledSingleLineTextFieldTest.h
// MLUI
//
// Created by Juan Andres Gebhard on 5/18/16.
// Copyright © 2016 MercadoLibre. All rights reserved.
//

#import <XCTest/XCTest.h>

@class MLTitledSingleLineTextField;

@interface MLTitledSingleLineTextFieldTest : XCTestCase

- (MLTitledSingleLineTextField *)textField;

- (void)testSetText;
- (void)testSetTextNil;
- (void)testSetTextFailsIfLongerThanMaxCharacters;
- (void)testSetHelperDescription;
- (void)testSetHelperDescriptionNil;
- (void)testErrorState;
- (void)testDisabledState;
- (void)testKeyboardTypeDefault;
- (void)testSetKeyboardType;
- (void)testAutocapitalizationTypeDefault;
- (void)testSetAutocapitalizationType;
- (void)testAutocorrectionTypeDefault;
- (void)testSetAutocorrectionType;

@end
