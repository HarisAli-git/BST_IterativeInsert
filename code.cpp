void iterative_insert(T d)
	{
		iterative_insert(d, root);
	}
	void iterative_insert(T d, Bnode<T>*&r)
	{
		if (r == NULL)
		{
			Bnode<T>* n = new Bnode<T>(d);
			r = n;
			return;
		}
		else if (r->data == d)
		{
			cout << "\nData Already exists!";
			return;
		}
		Bnode<T>* parent = NULL, *child = r;
		while (child != NULL)
		{
			parent = child;
			if (child->data == d)
			{
				cout << "\nData Already exists!";
				return;
			}
			else if (child->data < d)
			{
				child = child->right;
			}
			else
				child = child->left;
		}
		if (parent->data == d)
		{
			cout << "\nData Already exists!";
			return;
		}
		else if (parent->data < d)
		{
			Bnode<T>* n = new Bnode<T>(d);
			parent->right = n;
		}
		else
		{
			Bnode<T>* n = new Bnode<T>(d);
			parent->left = n;
		}
	}
