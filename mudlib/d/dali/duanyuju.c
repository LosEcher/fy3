
inherit ROOM;
void create()
{
set("short","������");
	set("long",@LONG
����һ�����µ��鷿��һ�����������ϱ߿�����������
����һ����װ�顣ֻ��һ��������������ؿ��顣
LONG);
	set("objects",([
                "/daemon/class/dali/duanyu": 1,
	]));
	set("exits",([ /* sizeof() == 1 */
              "south"  : __DIR__"chahua10",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}

