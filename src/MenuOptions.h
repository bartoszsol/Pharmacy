/*
 * LoginPanel.cpp
 *
 *  Created on: 6 wrz 2018
 *      Author: Kamil G�owi�ski, Bartosz So�oducha, Tomasz Siwiec, Piotr K�pa
 */

#ifndef MENUOPTIONS_H_
#define MENUOPTIONS_H_

#include "Warehouse.h"
#include "SearchResult.h"

class MenuOptions {
public:
	MenuOptions();
	virtual ~MenuOptions();
	void eraseProductOption(Warehouse *);
	void showProductDetailsOption(Warehouse *, int);
	void searchOption(Warehouse *, int);

	//SearchFunctions
	void categorySearch(Warehouse *);
	void nameSearch(Warehouse *);
	void priceSearch(Warehouse *);

	//eraseFunction
	void eraseByName(Warehouse *);
	void eraseByID(Warehouse *);
	void eraseByCategory(Warehouse*);

	//confirmation
	bool choiceConfirmation();
};

#endif /* MENUOPTIONS_H_ */
