class RoboticArm{
	private:
		double x;
		double y;
		double z;
		bool atlas;

	public:
		RoboticArm(double a, double b, double c, bool atl);
		double getX();
		double getY();
		double getZ();
		bool getAtlas();
		void grab();
		void release();
		void move(double a, double b, double c);
};

		

