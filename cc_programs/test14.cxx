class Singleton
{
	public:
		static Singleton* instance();

	private:
		static Singleton* pInstance;
};

Singleton* Singleton::pInstance = NULL;

Singleton* Singleton::instance()
{
	if(pInstance == NULL)
	{
		pInstance = new Singleton;
	}
	return pInstance;
}
