//Mr.music yangzhou �ĳ�

inherit ROOM;

void create()
{
        set("short", "�ĳ�");
        set("long", @LONG
	���Ǹ��Ȼ���Ĵ�ĳ�������Ц�������������ҳ�һ�ţ�����
�Ǵ�໹��С������Ͼʱ�����������������ſ�վ��һ������ĮȻ�ı���
�󺺣�ʹ�˲������ӡ��ĳ������ĸ����ᣬ�ֱ�Ϊ���硢���硢�Ϸ硢��
�磬��������������ĺ�������

LONG
        );

        set("exits", ([ 
                      "up" : __DIR__"dongguan3",
                      "east" : __DIR__"dongfeng",
                      "south" : __DIR__"nanfeng",
                      "west" : __DIR__"xifeng",
                      "north" : __DIR__"beifeng",
                     ]));
        set("objects", ([
                __DIR__"npc/weichunhua": 1 ,
                __DIR__"npc/likui": 1
        ]) );

        setup();
}

