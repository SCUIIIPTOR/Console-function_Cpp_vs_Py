# Фитнес — функция подсчёта калорийности и перевода избытка/недостачи в жир (грамм)

def calories_statistics(name_person, calories_received, calories_spent):                    		# 1. Аргументы функции: имя, калоирии потраченные, калории полученные.

	if int(calories_received) > int(calories_spent):                                        		# 2. Сравнение значений двух аргументов отвечающих за калорийность.
		difference_fat = int(calories_received) - int(calories_spent)
		kkal_in_gramm_fat = difference_fat / 9.3                                             		# 3. Исчисление грамм жира из излишних калорий.
		print(name_person + ', вы набираете вес.')
		print(f'\tЗа сегодня, накоплено: {abs(difference_fat)} калорий.')                   		# 4. Значение накопленных граммов жира, по модулю.

		if int(kkal_in_gramm_fat) > 1:
			print(f'\tЧто соответствует набору в {kkal_in_gramm_fat} грамм жира.', end='\n\n')      # 5. Вывод значения 3-го пункта.

	elif int(calories_spent) > int(calories_received):                                      		# 6. Сравнение значений двух аргументов отвечающих за калорийность.
		difference_skinny = int(calories_spent) - int(calories_received)
		kkal_in_gramm_fat = difference_skinny / 9.3                                          		# 7. Исчисление грамм жира из потраченых калорий.
		print(f'{name_person}, вы теряете вес.')
		print(f'\tЗа сегодня, потраченно: {abs(difference_skinny)} калорий.')               		# 8. Значение потраченных граммов жира, по модулю.

		if int(kkal_in_gramm_fat) > 1:
			print(f'\tЧто соответствует потере в {kkal_in_gramm_fat} грамм жира.', end='\n\n')      # 9. Вывод значения 7-го пункта.

	else:
		print(f'{name_person}, за сегодня уровень калорий остался неизменным.')             		# 10. Вывод значения не относящегося к накоплению/трате калорий.


input_name_person = input('Введите пожалуйста имя: ').title()                               		# 11. Ввод имени.
input_calories_received = input('Введите количество полученных за день калорий: ').title()  		# 12. Ввод значения полученных за день калорий.
input_calories_spent = input('Введите количество потраченных калорий: ').title()            		# 13. Ввод значения потраченых калорий за день.
information_person = [input_name_person, input_calories_received, input_calories_spent]
print(calories_statistics(*information_person))                                             		# 14. Получение данных.