package model;

import java.util.*;

public class BeerExpert {
	
	

	public List getBrands(String c) {
		// TODO Auto-generated method stub
		List brands = new ArrayList();
	    if (c.equals("amber")) {
	       brands.add("Jack Amber");
	       brands.add("Red Moose"); 
	    }
	    else {
	       brands.add("Jail Pale Ale");
	       brands.add("Gout Stout");
	    }
	    return(brands);
	}
	
}