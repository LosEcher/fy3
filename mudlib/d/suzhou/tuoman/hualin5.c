// Room: /d/suzhou/tuoman/hualin1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���ڻ������Ų����У��������ֻ�ǲ軨�����˼���·�����ۼ�С·��һ
������һ������֪��һ��������·��Ҫ�ص�С��ͣ����ȴ�е�����ˡ�
LONG
	);
	set("outdoors","suzhou");
	setup();
}
void reset()
{
	::reset();
	set("exits",([
		"north" :__DIR__"hualin"+(random(6)+1),
		"south" :__DIR__"hualin"+(random(6)+1),
		"west"  :__DIR__"hualin"+(random(6)+1),
		"east"  :__DIR__"hualin"+(random(6)+1),
	]));
}
int valid_leave(object me,string dir)
{
	write("�����ߵ�ͷ���ۻ����ֲ��嶫�������ˡ�\n");
	return 1;
}
