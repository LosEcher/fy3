
inherit ROOM;

void create()
{
        set("short", "ˮ��");
	set("long", @LONG
��һ���峺���׵�ˮ�������Դ���С�������м�����������
���ϴ�£�һ��˵˵ЦЦ�����и����ˣ�������������Ͱ��ˮ��
�������Ƶس�����ȥ�����������ȿ�ˮ��
LONG
	);
	set("resource/water", 1);

	set("exits", ([
                "south" : __DIR__"dongjie3",
	]));
	set("objects",([
		"/npc/man1":2,
		"/npc/man4":2,
	]));

	setup();
	replace_program(ROOM);
}

