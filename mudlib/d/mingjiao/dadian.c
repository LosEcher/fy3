//room: /d/mingjiao/dadian.c
inherit ROOM;

void init();

void create()
{
        set("short","���̴��");
        set("long", @LONG
�߽����ͻ��һ������֮�⣬�����ʮ�ֿտ����������յ
��ƣ������Ǿ�׳�彣��ʿ����ɭ�ϱ��ˡ�������һ������ǰ��һ��
��̴ľ������ͷ������������(ling)��ö������������һ����������
��������������ʥ��ͼ������ֱ�����¡������϶���һ�ˣ��Ų��¶�
�Ը߹󣬺�Ц��ŭ���������������̽������޼ɡ�
LONG
           );
set("valid_startroom",1);
        set("exits",([
           "west": __DIR__"tonglu1",
           "east" : __DIR__"liangongfang",
            "north":__DIR__"huayuan",
            "south" : __DIR__"qiandian",
           ]));
        set_temp("tieling",8);
        set("objects",([
//			__DIR__"npc/wushi":12,
			__DIR__"npc/zhangwuji":1,
                        __DIR__"npc/yintianzheng":1,
                        __DIR__"npc/xiexun":1,
                        ]));
        setup();
	"/obj/board/mingjiao_b"->foo();
}
