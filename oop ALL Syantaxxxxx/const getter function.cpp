class Rectangle {
private:
    int width;
    int height;
public:
int getWidth() const {
        return width;
    }
    int getHeight() const {
        return height;
    }
};

int main(void)
{
	const Rectangle rect(10, 20);
int width = rect.getWidth();
int height = rect.getHeight();
//COnst function is mosly use in the getter functionn
}
