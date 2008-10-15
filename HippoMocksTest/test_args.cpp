#include "hippomocks.h"
#include "yaffut.h"

class IB {
public:
	virtual ~IB() {}
	virtual void f(int);
	virtual void g(int) = 0;
};
/*
FUNC (checkArgumentsAccepted)
{
	MockRepository mocks;
	IB *iamock = mocks.newMock<IB>();
	mocks.RegisterExpectation(iamock, &IB::f, 1);
	mocks.RegisterExpectation(iamock, &IB::g, 2);
	mocks.ReplayAll();
	iamock->f(1);
	iamock->g(2);
	mocks.VerifyAll();
}
*/