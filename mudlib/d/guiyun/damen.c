inherit ROOM;

void create()
{
        set("short", "����");
        set("long", @LONG
��ǰ��һ��ׯԺ����¥�����ߴ���ש���ߣ���ɫ�׵�����д
�š�����ׯ����������֡����ҽ�Ϊ�¾ɣ��߽Ǵ�����Ƥ�Ѱ��䣬
¶������ɫ��ľ�ʡ������������Ѳ��¶�ʮ�������ˡ�
LONG );
        set("outdoors", "guiyun");

        set("exits", ([
                "enter" : __DIR__"qianyuan",
                "south" : __DIR__"matou",
        ]));
        set("objects", ([
                __DIR__"obj/jiading" : 2,
        ]));
        setup();
}



