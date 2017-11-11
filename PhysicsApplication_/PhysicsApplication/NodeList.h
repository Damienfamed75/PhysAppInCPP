#pragma once
class node_base {
	node_base* next;
	public:
		node_base() : next() {}
};
template<typename T>
class node : public node_base {
	T data;
	public:
		node(const T& d) : data(d) {}
};
class polymorphic_list {
	node_base* head;
	public:
		polymorphic_list() : head() {}
		template<typename T>
		void insert(const T& d) {
			node_base* n = new node<T>(d);
		}
};